type app = Messages | Crapchat | Bank | Home;

let appToString = x =>
  switch x {
  | Messages => "Messages" 
  | Crapchat => "Crapchat" 
  | Bank => "Bank"
  | Home => "None"
  };

let apps = [|
  Messages, 
  Crapchat, 
  Bank,
|];
