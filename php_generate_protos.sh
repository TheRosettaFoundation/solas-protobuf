### Generate Email Classes ###
protoc-gen-php -o ./generated/php/emails -i ./protos/emails ./protos/emails/EmailMessage.proto
protoc-gen-php -o ./generated/php/emails -i ./protos/emails ./protos/emails/OrgMembershipAccepted.proto
protoc-gen-php -o ./generated/php/emails -i ./protos/emails ./protos/emails/OrgMembershipRefused.proto
protoc-gen-php -o ./generated/php/emails -i ./protos/emails ./protos/emails/PasswordResetEmail.proto
protoc-gen-php -o ./generated/php/emails -i ./protos/emails ./protos/emails/TaskArchived.proto
protoc-gen-php -o ./generated/php/emails -i ./protos/emails ./protos/emails/TaskClaimed.proto
protoc-gen-php -o ./generated/php/emails -i ./protos/emails ./protos/emails/TaskScoreEmail.proto
protoc-gen-php -o ./generated/php/emails -i ./protos/emails ./protos/emails/TrackedTaskUploaded.proto
protoc-gen-php -o ./generated/php/emails -i ./protos/emails ./protos/emails/UserTaskClaim.proto
protoc-gen-php -o ./generated/php/emails -i ./protos/emails ./protos/emails/OrgFeedback.proto
protoc-gen-php -o ./generated/php/emails -i ./protos/emails ./protos/emails/UserFeedback.proto
protoc-gen-php -o ./generated/php/emails -i ./protos/emails ./protos/emails/UserTaskStreamEmail.proto
protoc-gen-php -o ./generated/php/emails -i ./protos/emails ./protos/emails/EmailVerification.proto
protoc-gen-php -o ./generated/php/emails -i ./protos/emails ./protos/emails/BannedLogin.proto
protoc-gen-php -o ./generated/php/emails -i ./protos/emails ./protos/emails/TrackedTaskSourceUpdated.proto
protoc-gen-php -o ./generated/php/emails -i ./protos/emails ./protos/emails/ClaimedTaskSourceUpdated.proto
protoc-gen-php -o ./generated/php/emails -i ./protos/emails ./protos/emails/ClaimedTaskUploaded.proto
protoc-gen-php -o ./generated/php/emails -i ./protos/emails ./protos/emails/UserReferenceEmail.proto
protoc-gen-php -o ./generated/php/emails -i ./protos/emails ./protos/emails/UserBadgeAwardedEmail.proto

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
protoc-gen-php -o ./generated/php/models -i ./protos/models ./protos/models/Locale.proto
protoc-gen-php -o ./generated/php/models -i ./protos/models ./protos/models/UserPersonalInformation.proto
protoc-gen-php -o ./generated/php/models -i ./protos/models ./protos/models/UserTaskStreamNotification.proto
protoc-gen-php -o ./generated/php/models -i ./protos/models ./protos/models/TaskReview.proto
protoc-gen-php -o ./generated/php/models -i ./protos/models ./protos/models/BannedUser.proto
protoc-gen-php -o ./generated/php/models -i ./protos/models ./protos/models/BannedOrganisation.proto

### Generate Requests Classes ###
protoc-gen-php -o ./generated/php/requests -i ./protos/requests ./protos/requests/UserTaskScoreRequest.proto
protoc-gen-php -o ./generated/php/requests -i ./protos/requests ./protos/requests/StatisticsUpdateRequest.proto
protoc-gen-php -o ./generated/php/requests -i ./protos/requests ./protos/requests/TaskUploadNotificationRequest.proto
protoc-gen-php -o ./generated/php/requests -i ./protos/requests ./protos/requests/CalculateProjectDeadlinesRequest.proto
protoc-gen-php -o ./generated/php/requests -i ./protos/requests ./protos/requests/OrgCreatedNotificationRequest.proto

### Generate Common Classes ###
protoc-gen-php -o ./generated/php -i ./protos ./protos/ProtoList.proto
