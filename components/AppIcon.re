type appIconCss = {
  icon: string
};

[@bs.module("../styles/components/AppIcon.module.css")] 
external styles: appIconCss = "default";

[@react.component]
let make = (~label, ~onClick) =>
  <button className={styles.icon} onClick> {ReasonReact.string(label)} </button>
  