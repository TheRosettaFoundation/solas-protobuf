//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

// Generated from: WorkflowNode.proto
// Note: requires additional types generated from: Task.proto
namespace SolasMatch.Proto.model
{
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"WorkflowNode")]
  public partial class WorkflowNode : global::ProtoBuf.IExtensible
  {
    public WorkflowNode() {}
    
    private int _taskId;
    [global::ProtoBuf.ProtoMember(1, IsRequired = true, Name=@"taskId", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public int taskId
    {
      get { return _taskId; }
      set { _taskId = value; }
    }

    private Task _task = null;
    [global::ProtoBuf.ProtoMember(2, IsRequired = false, Name=@"task", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue(null)]
    public Task task
    {
      get { return _task; }
      set { _task = value; }
    }
    private readonly global::System.Collections.Generic.List<WorkflowNode> _next = new global::System.Collections.Generic.List<WorkflowNode>();
    [global::ProtoBuf.ProtoMember(3, Name=@"next", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public global::System.Collections.Generic.List<WorkflowNode> next
    {
      get { return _next; }
    }
  
    private readonly global::System.Collections.Generic.List<WorkflowNode> _previous = new global::System.Collections.Generic.List<WorkflowNode>();
    [global::ProtoBuf.ProtoMember(4, Name=@"previous", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public global::System.Collections.Generic.List<WorkflowNode> previous
    {
      get { return _previous; }
    }
  
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
}