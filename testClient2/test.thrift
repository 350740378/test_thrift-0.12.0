struct User{
  1:i64 id,
  2:string name,
  3:i32 age,
  4:bool vip
}

service Test{
 i32 add(1:i32 a,2:i32 b)
 User getById(1:i64 id)
}

