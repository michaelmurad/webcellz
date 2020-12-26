[@bs.module("next/head")]
external head: string = "default";

type homeCss = {
  container: string
};

[@bs.module("../styles/Home.module.css")] 
external styles: homeCss = "default";

let appName = "WebCellz";

[@react.component]
let make = () => {
  <div className={styles.container}> 
    <head>
      <title>{ReasonReact.string("WebCellz")}</title>
      <link rel="icon" href="/favicon.ico" />
    </head>
    <header>{ReasonReact.string(appName)}</header>
    {ReasonReact.string("Cell2!")} 
  </div>;
}