//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

// Generated from: ArchivedProject.proto
namespace Solas_Match.protos.model
{
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"ArchivedProject")]
  public partial class ArchivedProject : global::ProtoBuf.IExtensible
  {
    public ArchivedProject() {}
    
    private int _id;
    [global::ProtoBuf.ProtoMember(1, IsRequired = true, Name=@"id", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public int id
    {
      get { return _id; }
      set { _id = value; }
    }

    private string _title = "";
    [global::ProtoBuf.ProtoMember(2, IsRequired = false, Name=@"title", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue("")]
    public string title
    {
      get { return _title; }
      set { _title = value; }
    }

    private string _description = "";
    [global::ProtoBuf.ProtoMember(3, IsRequired = false, Name=@"description", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue("")]
    public string description
    {
      get { return _description; }
      set { _description = value; }
    }

    private string _impact = "";
    [global::ProtoBuf.ProtoMember(4, IsRequired = false, Name=@"impact", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue("")]
    public string impact
    {
      get { return _impact; }
      set { _impact = value; }
    }

    private string _deadline = "";
    [global::ProtoBuf.ProtoMember(5, IsRequired = false, Name=@"deadline", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue("")]
    public string deadline
    {
      get { return _deadline; }
      set { _deadline = value; }
    }

    private int _organisationId = default(int);
    [global::ProtoBuf.ProtoMember(6, IsRequired = false, Name=@"organisationId", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(default(int))]
    public int organisationId
    {
      get { return _organisationId; }
      set { _organisationId = value; }
    }

    private string _reference = "";
    [global::ProtoBuf.ProtoMember(7, IsRequired = false, Name=@"reference", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue("")]
    public string reference
    {
      get { return _reference; }
      set { _reference = value; }
    }

    private int _wordCount = default(int);
    [global::ProtoBuf.ProtoMember(8, IsRequired = false, Name=@"wordCount", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(default(int))]
    public int wordCount
    {
      get { return _wordCount; }
      set { _wordCount = value; }
    }

    private string _createdTime = "";
    [global::ProtoBuf.ProtoMember(9, IsRequired = false, Name=@"createdTime", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue("")]
    public string createdTime
    {
      get { return _createdTime; }
      set { _createdTime = value; }
    }

    private string _languageCode = "";
    [global::ProtoBuf.ProtoMember(10, IsRequired = false, Name=@"languageCode", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue("")]
    public string languageCode
    {
      get { return _languageCode; }
      set { _languageCode = value; }
    }

    private string _countryCode = "";
    [global::ProtoBuf.ProtoMember(11, IsRequired = false, Name=@"countryCode", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue("")]
    public string countryCode
    {
      get { return _countryCode; }
      set { _countryCode = value; }
    }

    private string _archivedDate = "";
    [global::ProtoBuf.ProtoMember(12, IsRequired = false, Name=@"archivedDate", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue("")]
    public string archivedDate
    {
      get { return _archivedDate; }
      set { _archivedDate = value; }
    }

    private int _translatorId = default(int);
    [global::ProtoBuf.ProtoMember(13, IsRequired = false, Name=@"translatorId", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(default(int))]
    public int translatorId
    {
      get { return _translatorId; }
      set { _translatorId = value; }
    }
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
}