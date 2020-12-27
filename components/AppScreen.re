[@react.component]
let make = (~onClick, ~app) =>
  switch app {
    | EP.Messages => 
      <App onClick>
        {ReasonReact.string("No new messages")}
      </App>
    | EP.Bank => 
      <App onClick>
        {ReasonReact.string("Balance: -$21.32")}
      </App>
    | EP.Crapchat =>
      <App onClick>
        <h1>
          {ReasonReact.string("You have been banned for the following reasons:")}
        </h1>
        <div>
          {ReasonReact.string("Reeking of a not so quiet desperation")}
        </div>
      </App>
    | EP.Home => React.null
  };
   