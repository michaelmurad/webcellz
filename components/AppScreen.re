type appScreenCss = {
  messages: string,
  container: string
};

[@bs.module("../styles/components/AppScreen.module.css")] 
external styles: appScreenCss = "default";

[@react.component]
let make = (~onClick, ~app) =>
  switch app {
  | EP.Messages => 
    <div className={styles.container}>
      <Button label={"Back"} onClick />
      {
        ReasonReact.string("No new messages")
      }
    </div>
  | EP.Bank => 
    <div className={styles.container ++ " " ++ styles.messages}>
      <Button label={"Back"} onClick />
      { ReasonReact.string("Balance: -$21.32")}
    </div>
  | EP.Crapchat => 
    <div className={styles.container ++ " " ++ styles.messages}>
      <Button label={"Back"} onClick />
      <h1>
      { ReasonReact.string("You have been banned for the following reasons:") }
      </h1>
      <div>
      { ReasonReact.string("Reeking of a not so quiet desperation") }
      </div>
    </div>
  | EP.Home => React.null
  };
   