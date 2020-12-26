type reasonCss = {
  container: string
};

[@bs.module("../../styles/Reason.module.css")] 
external styles: reasonCss = "default";

[@react.component]
let make = () =>
  {

    <div className={styles.container}> 
    {ReasonReact.string("REASON PAGE!")} 
  </div>;
  }