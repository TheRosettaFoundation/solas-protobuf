//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

// Generated from: FeedbackEmail.proto
// Note: requires additional types generated from: EmailMessage.proto
namespace SolasMatch.Proto.email
{
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"FeedbackEmail")]
  public partial class FeedbackEmail : global::ProtoBuf.IExtensible
  {
    public FeedbackEmail() {}
    
    private EmailMessage.Type _email_type;
    [global::ProtoBuf.ProtoMember(1, IsRequired = true, Name=@"email_type", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public EmailMessage.Type email_type
    {
      get { return _email_type; }
      set { _email_type = value; }
    }
    private int _taskId;
    [global::ProtoBuf.ProtoMember(2, IsRequired = true, Name=@"taskId", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public int taskId
    {
      get { return _taskId; }
      set { _taskId = value; }
    }
    private readonly global::System.Collections.Generic.List<int> _userId = new global::System.Collections.Generic.List<int>();
    [global::ProtoBuf.ProtoMember(3, Name=@"userId", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public global::System.Collections.Generic.List<int> userId
    {
      get { return _userId; }
    }
  
    private string _feedback;
    [global::ProtoBuf.ProtoMember(4, IsRequired = true, Name=@"feedback", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public string feedback
    {
      get { return _feedback; }
      set { _feedback = value; }
    }
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
}