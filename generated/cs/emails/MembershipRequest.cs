//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

// Generated from: MembershipRequest.proto
namespace Solas_Match.protos.model
{
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"MembershipRequest")]
  public partial class MembershipRequest : global::ProtoBuf.IExtensible
  {
    public MembershipRequest() {}
    
    private int _id;
    [global::ProtoBuf.ProtoMember(1, IsRequired = true, Name=@"id", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public int id
    {
      get { return _id; }
      set { _id = value; }
    }
    private int _user_id;
    [global::ProtoBuf.ProtoMember(2, IsRequired = true, Name=@"user_id", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public int user_id
    {
      get { return _user_id; }
      set { _user_id = value; }
    }
    private int _org_id;
    [global::ProtoBuf.ProtoMember(3, IsRequired = true, Name=@"org_id", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public int org_id
    {
      get { return _org_id; }
      set { _org_id = value; }
    }

    private string _request_time = "";
    [global::ProtoBuf.ProtoMember(4, IsRequired = false, Name=@"request_time", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue("")]
    public string request_time
    {
      get { return _request_time; }
      set { _request_time = value; }
    }
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
}