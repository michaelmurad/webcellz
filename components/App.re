type appCss = {
  messages: string,
  container: string
};

[@bs.module("../styles/components/App.module.css")] 
external styles: appCss = "default";

[@react.component]
let make = (~onClick, ~children) =>
  <div className={styles.container}>
    <Button label={"Back"} onClick />
    {children}
  </div>