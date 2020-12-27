type eggplantScreenCss = {
  inApp: string,
  container: string
};

[@bs.module("../styles/components/EggplantScreen.module.css")] 
external styles: eggplantScreenCss = "default";

[@react.component]
let make = () => {
  let (app, setApp) = React.useState(_ => EP.Home);
  let back = (_) => setApp(_ => Home);
  switch (app) {
  | Home => 
    <div className={styles.container}>
      {
        EP.apps 
        ->Belt.Array.map(application =>  
          <AppIcon key={EP.appToString(application)} label={EP.appToString(application)} onClick={(_) => setApp(_ => application)} /> 
      )
      ->React.array
      }
    </div> 
  | Messages =>
    <AppScreen onClick={back} app />
  | Crapchat => 
    <AppScreen onClick={back} app />
  | Bank => 
    <AppScreen onClick={back} app />
  }
  };