type element;
type ref = React.Ref.t(Js.nullable(element));

include ViewPagerMethods.Make({
  type t = element;
});
