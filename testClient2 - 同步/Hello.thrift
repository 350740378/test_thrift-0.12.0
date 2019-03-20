/*namespace cpp HelloThrift.Interface
service HelloService{
    string HelloString(1:string para)
    i32 HelloInt(1:i32 para)
    bool HelloBoolean(1:bool para)
    void HelloVoid()
    string HelloNull()
}
*/

struct  ReResult
{
 1:i16 iReMessageType,
 2:string strReMessageData,
}

service  CCQCService
{
	 ReResult DataTransfer(1:i16 iMessageType, 2:string strMessageData);
}
