### Generate Email Classes ###
cd ./protos/emails
protoc --plugin=$1 --php_out=../../generated/php/emails EmailMessage.proto
protoc --plugin=$1 --php_out=../../generated/php/emails OrgMembershipAccepted.proto
protoc --plugin=$1 --php_out=../../generated/php/emails OrgMembershipRefused.proto
protoc --plugin=$1 --php_out=../../generated/php/emails PasswordResetEmail.proto
protoc --plugin=$1 --php_out=../../generated/php/emails TaskArchived.proto
protoc --plugin=$1 --php_out=../../generated/php/emails TaskClaimed.proto
protoc --plugin=$1 --php_out=../../generated/php/emails TaskScoreEmail.proto
protoc --plugin=$1 --php_out=../../generated/php/emails TrackedTaskUploaded.proto
protoc --plugin=$1 --php_out=../../generated/php/emails UserTaskClaim.proto
protoc --plugin=$1 --php_out=../../generated/php/emails OrgFeedback.proto
protoc --plugin=$1 --php_out=../../generated/php/emails UserFeedback.proto
protoc --plugin=$1 --php_out=../../generated/php/emails UserTaskStreamEmail.proto
protoc --plugin=$1 --php_out=../../generated/php/emails EmailVerification.proto
protoc --plugin=$1 --php_out=../../generated/php/emails BannedLogin.proto
protoc --plugin=$1 --php_out=../../generated/php/emails TrackedTaskSourceUpdated.proto
protoc --plugin=$1 --php_out=../../generated/php/emails ClaimedTaskSourceUpdated.proto
protoc --plugin=$1 --php_out=../../generated/php/emails ClaimedTaskUploaded.proto
protoc --plugin=$1 --php_out=../../generated/php/emails UserReferenceEmail.proto
protoc --plugin=$1 --php_out=../../generated/php/emails UserBadgeAwardedEmail.proto
protoc --plugin=$1 --php_out=../../generated/php/emails UserUnclaimedTaskEmail.proto
protoc --plugin=$1 --php_out=../../generated/php/emails ProjectCreatedEmail.proto

cd ../models
### Generate Model Classes ###
protoc --plugin=$1 --php_out=../../generated/php/models ArchivedTask.proto
protoc --plugin=$1 --php_out=../../generated/php/models Badge.proto
protoc --plugin=$1 --php_out=../../generated/php/models Country.proto
protoc --plugin=$1 --php_out=../../generated/php/models Language.proto
protoc --plugin=$1 --php_out=../../generated/php/models Login.proto
protoc --plugin=$1 --php_out=../../generated/php/models MembershipRequest.proto
protoc --plugin=$1 --php_out=../../generated/php/models Organisation.proto
protoc --plugin=$1 --php_out=../../generated/php/models PasswordReset.proto
protoc --plugin=$1 --php_out=../../generated/php/models PasswordResetRequest.proto
protoc --plugin=$1 --php_out=../../generated/php/models Register.proto
protoc --plugin=$1 --php_out=../../generated/php/models Tag.proto
protoc --plugin=$1 --php_out=../../generated/php/models TaskMetadata.proto
protoc --plugin=$1 --php_out=../../generated/php/models Task.proto
protoc --plugin=$1 --php_out=../../generated/php/models User.proto
protoc --plugin=$1 --php_out=../../generated/php/models Project.proto
protoc --plugin=$1 --php_out=../../generated/php/models ArchivedProject.proto
protoc --plugin=$1 --php_out=../../generated/php/models WorkflowNode.proto
protoc --plugin=$1 --php_out=../../generated/php/models WorkflowGraph.proto
protoc --plugin=$1 --php_out=../../generated/php/models Statistic.proto
protoc --plugin=$1 --php_out=../../generated/php/models ProjectFile.proto
protoc --plugin=$1 --php_out=../../generated/php/models Locale.proto
protoc --plugin=$1 --php_out=../../generated/php/models UserPersonalInformation.proto
protoc --plugin=$1 --php_out=../../generated/php/models UserTaskStreamNotification.proto
protoc --plugin=$1 --php_out=../../generated/php/models TaskReview.proto
protoc --plugin=$1 --php_out=../../generated/php/models BannedUser.proto
protoc --plugin=$1 --php_out=../../generated/php/models BannedOrganisation.proto
protoc --plugin=$1 --php_out=../../generated/php/models ProtoList.proto
protoc --plugin=$1 --php_out=../../generated/php/models OAuthResponse.proto

cd ../requests
### Generate Requests Classes ###
protoc --plugin=$1 --php_out=../../generated/php/requests UserTaskScoreRequest.proto
protoc --plugin=$1 --php_out=../../generated/php/requests StatisticsUpdateRequest.proto
protoc --plugin=$1 --php_out=../../generated/php/requests TaskUploadNotificationRequest.proto
protoc --plugin=$1 --php_out=../../generated/php/requests CalculateProjectDeadlinesRequest.proto
protoc --plugin=$1 --php_out=../../generated/php/requests OrgCreatedNotificationRequest.proto

cd ../notifications
### Generate Notification Classes ###
protoc --plugin=$1 --php_out=../../generated/php/notifications TaskRevokedNotification.proto
