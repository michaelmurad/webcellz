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

let macrosoft = "MacroSoft";
let eggplant = "Eggplant";
let googol = "Googol";

let appName = "WebCellz";

type webcell = {
  name: string,
  url: string
};

let webcellz = [|
  { name: macrosoft, url: "https://www.youtube.com/watch?v=eywi0h_Y5_U" }, 
  {name: eggplant, url: "/eggplant"}, 
  {name: googol, url: "./googol"}
  |];

[@react.component]
let make = () => {
  let router = useRouter();
  <>
  <head>
      <title>{ReasonReact.string("WebCellz")}</title>
      <link rel="icon" href="/favicon.ico" />
  </head>
  <div className={styles.container}> 
    <header>{ReasonReact.string(appName)}</header>
    <div className={styles.title}>
      {ReasonReact.string("Welcome to WebCellz!")}
    </div>
    <div className={styles.description}>
      {ReasonReact.string("Why pay thousands of dollars for a cell phone when you can use a WebCell for free?")}
    </div>
    <div className={styles.description}>
      {ReasonReact.string("Choose your WebCell from the WebCellz below")}
    </div>
    <div className={styles.buttons}>
    { 
      Array.map(webcell =>  
      {
        let { name: label, url } = webcell;
        let onClick: ReactEvent.Mouse.t => unit = (_) => router.push(url); 

        <Button key={label} label onClick /> 
      }, webcellz)
      ->React.array
    }
    </div>
  </div>
  </>;
}