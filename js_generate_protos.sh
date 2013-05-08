### Generate Email Classes ###
protojs/ProtoBuf.js/bin/proto2js protos/emails/EmailMessage.proto -class -min >generated/js/emails/EmailMessage.js
protojs/ProtoBuf.js/bin/proto2js protos/emails/OrgMembershipAccepted.proto -class -min >generated/js/emails/OrgMembershipAccepted.js
protojs/ProtoBuf.js/bin/proto2js protos/emails/OrgMembershipRefused.proto -class -min >generated/js/emails/OrgMembershipRefused.js
protojs/ProtoBuf.js/bin/proto2js protos/emails/PasswordResetEmail.proto -class -min >generated/js/emails/PasswordResetEmail.js
protojs/ProtoBuf.js/bin/proto2js protos/emails/TaskArchived.proto -class -min >generated/js/emails/TaskArchived.js
protojs/ProtoBuf.js/bin/proto2js protos/emails/TaskClaimed.proto -class -min >generated/js/emails/TaskClaimed.js
protojs/ProtoBuf.js/bin/proto2js protos/emails/TaskScoreEmail.proto -class -min >generated/js/emails/TaskScoreEmail.js
protojs/ProtoBuf.js/bin/proto2js protos/emails/TaskTranslationUploaded.proto -class -min >generated/js/emails/TaskTranslationUploaded.js
protojs/ProtoBuf.js/bin/proto2js protos/emails/UserTaskClaim.proto -class -min >generated/js/emails/UserTaskClaim.js
protojs/ProtoBuf.js/bin/proto2js protos/emails/FeedbackEmail.proto -class -min >generated/js/emails/FeedbackEmail.js


### Generate Model Classes ###
protojs/ProtoBuf.js/bin/proto2js protos/models/ArchivedTask.proto -class -min >generated/js/models/ArchivedTask.js
protojs/ProtoBuf.js/bin/proto2js protos/models/Badge.proto -class -min >generated/js/models/Badge.js
protojs/ProtoBuf.js/bin/proto2js protos/models/Country.proto -class -min >generated/js/models/Country.js
protojs/ProtoBuf.js/bin/proto2js protos/models/Language.proto -class -min >generated/js/models/Language.js
protojs/ProtoBuf.js/bin/proto2js protos/models/Login.proto -class -min >generated/js/models/Login.js
protojs/ProtoBuf.js/bin/proto2js protos/models/MembershipRequest.proto -class -min >generated/js/models/MembershipRequest.js
protojs/ProtoBuf.js/bin/proto2js protos/models/Organisation.proto -class -min >generated/js/models/Organisation.js
protojs/ProtoBuf.js/bin/proto2js protos/models/PasswordReset.proto -class -min >generated/js/models/PasswordReset.js
protojs/ProtoBuf.js/bin/proto2js protos/models/PasswordResetRequest.proto -class -min >generated/js/models/PasswordResetRequest.js
protojs/ProtoBuf.js/bin/proto2js protos/models/Register.proto -class -min >generated/js/models/Register.js
protojs/ProtoBuf.js/bin/proto2js protos/models/Tag.proto -class -min >generated/js/models/Tag.js
protojs/ProtoBuf.js/bin/proto2js protos/models/TaskMetadata.proto -class -min >generated/js/models/TaskMetadata.js
protojs/ProtoBuf.js/bin/proto2js protos/models/Task.proto -class -min >generated/js/models/Task.js
protojs/ProtoBuf.js/bin/proto2js protos/models/User.proto -class -min >generated/js/models/User.js
protojs/ProtoBuf.js/bin/proto2js protos/models/Project.proto -class -min >generated/js/models/Project.js
protojs/ProtoBuf.js/bin/proto2js protos/models/ArchivedProject.proto -class -min >generated/js/models/ArchivedProject.js
protojs/ProtoBuf.js/bin/proto2js protos/models/WorkflowNode.proto -class -min >generated/js/models/WorkflowNode.js
protojs/ProtoBuf.js/bin/proto2js protos/models/WorkflowGraph.proto -class -min >generated/js/models/WorkflowGraph.js
protojs/ProtoBuf.js/bin/proto2js protos/models/Statistic.proto -class -min >generated/js/models/Statistic.js
protojs/ProtoBuf.js/bin/proto2js protos/models/ProjectFile.proto -class -min >generated/js/models/ProjectFile.js
protojs/ProtoBuf.js/bin/proto2js protos/models/Locale.proto -class -min >generated/js/models/Locale.js


### Generate Requests Classes ###
protojs/ProtoBuf.js/bin/proto2js protos/requests/UserTaskScoreRequest.proto -class -min >generated/js/requests/UserTaskScoreRequest.js
protojs/ProtoBuf.js/bin/proto2js protos/requests/StatisticsUpdateRequest.proto -class -min >generated/js/requests/StatisticsUpdateRequest.js

### Generate Common Classes ###
protojs/ProtoBuf.js/bin/proto2js protos/ProtoList.proto -class -min >generated/js/ProtoList.js
