type buttonCss = {
  container: string
};

[@bs.module("../styles/components/Button.module.css")] 
external styles: buttonCss = "default";

[@react.component]
let make = (~label, ~onClick) =>
  <button className={styles.container} onClick> {ReasonReact.string(label)} </button>
  