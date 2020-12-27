type appCss = {
  icon: string
};

[@bs.module("../styles/components/App.module.css")] 
external styles: appCss = "default";

[@react.component]
let make = (~label, ~onClick) =>
  <button className={styles.icon} onClick> {ReasonReact.string(label)} </button>
  