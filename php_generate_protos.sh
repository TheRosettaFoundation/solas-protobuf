### Generate Email Classes ###
protoc-gen-php -o ./generated/php/emails -i ./protos/emails ./protos/emails/EmailMessage.proto
protoc-gen-php -o ./generated/php/emails -i ./protos/emails ./protos/emails/OrgMembershipAccepted.proto
protoc-gen-php -o ./generated/php/emails -i ./protos/emails ./protos/emails/OrgMembershipRefused.proto
protoc-gen-php -o ./generated/php/emails -i ./protos/emails ./protos/emails/PasswordResetEmail.proto
protoc-gen-php -o ./generated/php/emails -i ./protos/emails ./protos/emails/TaskArchived.proto
protoc-gen-php -o ./generated/php/emails -i ./protos/emails ./protos/emails/TaskClaimed.proto
protoc-gen-php -o ./generated/php/emails -i ./protos/emails ./protos/emails/TaskScoreEmail.proto
protoc-gen-php -o ./generated/php/emails -i ./protos/emails ./protos/emails/TaskTranslationUploaded.proto
protoc-gen-php -o ./generated/php/emails -i ./protos/emails ./protos/emails/UserTaskClaim.proto
protoc-gen-php -o ./generated/php/emails -i ./protos/emails ./protos/emails/FeedbackEmail.proto

### Generate Model Classes ###
protoc-gen-php -o ./generated/php/models -i ./protos/models ./protos/models/ArchivedTask.proto
protoc-gen-php -o ./generated/php/models -i ./protos/models ./protos/models/Badge.proto
protoc-gen-php -o ./generated/php/models -i ./protos/models ./protos/models/Country.proto
protoc-gen-php -o ./generated/php/models -i ./protos/models ./protos/models/Language.proto
protoc-gen-php -o ./generated/php/models -i ./protos/models ./protos/models/Login.proto
protoc-gen-php -o ./generated/php/models -i ./protos/models ./protos/models/MembershipRequest.proto
protoc-gen-php -o ./generated/php/models -i ./protos/models ./protos/models/Organisation.proto
protoc-gen-php -o ./generated/php/models -i ./protos/models ./protos/models/PasswordReset.proto
protoc-gen-php -o ./generated/php/models -i ./protos/models ./protos/models/PasswordResetRequest.proto
protoc-gen-php -o ./generated/php/models -i ./protos/models ./protos/models/Register.proto
protoc-gen-php -o ./generated/php/models -i ./protos/models ./protos/models/Tag.proto
protoc-gen-php -o ./generated/php/models -i ./protos/models ./protos/models/TaskMetadata.proto
protoc-gen-php -o ./generated/php/models -i ./protos/models ./protos/models/Task.proto
protoc-gen-php -o ./generated/php/models -i ./protos/models ./protos/models/User.proto
protoc-gen-php -o ./generated/php/models -i ./protos/models ./protos/models/Project.proto
protoc-gen-php -o ./generated/php/models -i ./protos/models ./protos/models/ArchivedProject.proto
protoc-gen-php -o ./generated/php/models -i ./protos/models ./protos/models/WorkflowNode.proto
protoc-gen-php -o ./generated/php/models -i ./protos/models ./protos/models/WorkflowGraph.proto
protoc-gen-php -o ./generated/php/models -i ./protos/models ./protos/models/Statistic.proto
protoc-gen-php -o ./generated/php/models -i ./protos/models ./protos/models/ProjectFile.proto

### Generate Requests Classes ###
protoc-gen-php -o ./generated/php/requests -i ./protos/requests ./protos/requests/UserTaskScoreRequest.proto


### Generate Common Classes ###
protoc-gen-php -o ./generated/php -i ./protos ./protos/ProtoList.proto
