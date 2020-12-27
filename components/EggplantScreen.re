  type eggplantScreenCss = {
  container: string
};

[@bs.module("../styles/components/EggplantScreen.module.css")] 
external styles: eggplantScreenCss = "default";

[@react.component]
let make = () => {
  let (app, setApp) = React.useState(_ => EP.Home);
  let onClick = (_) => setApp(_ => Home);
  switch (app) {
  | Home => 
    <div className={styles.container}>
      {
        EP.apps 
        ->Belt.Array.map(application =>  
          <AppIcon 
            key={EP.appToString(application)} 
            label={EP.appToString(application)} 
            onClick={(_) => setApp(_ => application)} 
          />
        )
        ->React.array
      }
    </div> 
  | Messages =>
    <AppScreen onClick app />
  | Crapchat => 
    <AppScreen onClick app />
  | Bank => 
    <AppScreen onClick app />
  }
};