[@bs.module("next/head")]
external head: string = "default";

[@bs.module("next/link")]
external nextLink: ReasonReact.reactClassInternal = "default";

type router = {
  push: string => unit
};

[@bs.module("next/router")]
external useRouter: unit => router = "useRouter";

type homeCss = {
  container: string,
  buttons: string,
  title: string,
  description: string,
};

[@bs.module("../styles/Home.module.css")] 
external styles: homeCss = "default";

type webCell = {
  name: string,
  url: string
};

let webCellz = [|
  { name: "MacroSoft", url: "https://www.youtube.com/watch?v=eywi0h_Y5_U" }, 
  { name: "Eggplant", url: "/eggplant" }, 
  { name: "Googol", url: "./googol" }
|];

[@react.component]
let make = () => {
  let router = useRouter();
  <>
  <head>
      <title>{ReasonReact.string("WebCellz")}</title>
      <link rel="icon" href="/favicon.ico" />
      <meta name="description" content="Why pay thousands of dollars for a cell phone when you can use a WebCell for free?" />
  </head>
  <div className={styles.container}> 
    <div className={styles.title}>
      {ReasonReact.string("webcellz")}
    </div>
    <div className={styles.description}>
      {ReasonReact.string("Why pay thousands of dollars for a cell phone when you can use webcellz for free?")}
    </div>
    <div className={styles.description}>
      {ReasonReact.string("webcellz are GUARANTEED to match your real cell phone usage")}
    </div>
    <div className={styles.description}>
      {ReasonReact.string("Choose your webcellz below!")}
    </div>
    <div className={styles.buttons}>
    { 
      Array.map(webCell =>  {
        let { name: label, url } = webCell;
        let onClick: ReactEvent.Mouse.t => unit = (_) => router.push(url); 

        <Button key={label} label onClick /> 
      }, webCellz)
      ->React.array
    }
    </div>
  </div>
  </>;
}