//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

// Generated from: PasswordReset.proto
namespace SolasMatch.Proto.model
{
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"PasswordReset")]
  public partial class PasswordReset : global::ProtoBuf.IExtensible
  {
    public PasswordReset() {}
    
    private string _password;
    [global::ProtoBuf.ProtoMember(1, IsRequired = true, Name=@"password", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public string password
    {
      get { return _password; }
      set { _password = value; }
    }
    private string _key;
    [global::ProtoBuf.ProtoMember(2, IsRequired = true, Name=@"key", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public string key
    {
      get { return _key; }
      set { _key = value; }
    }
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
}