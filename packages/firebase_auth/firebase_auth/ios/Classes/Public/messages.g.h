// Autogenerated from Pigeon (v9.2.4), do not edit directly.
// See also: https://pub.dev/packages/pigeon

#import <Foundation/Foundation.h>

@protocol FlutterBinaryMessenger;
@protocol FlutterMessageCodec;
@class FlutterError;
@class FlutterStandardTypedData;

NS_ASSUME_NONNULL_BEGIN

/// The type of operation that generated the action code from calling
/// [checkActionCode].
typedef NS_ENUM(NSUInteger, ActionCodeInfoOperation) {
  /// Unknown operation.
  ActionCodeInfoOperationUnknown = 0,
  /// Password reset code generated via [sendPasswordResetEmail].
  ActionCodeInfoOperationPasswordReset = 1,
  /// Email verification code generated via [User.sendEmailVerification].
  ActionCodeInfoOperationVerifyEmail = 2,
  /// Email change revocation code generated via [User.updateEmail].
  ActionCodeInfoOperationRecoverEmail = 3,
  /// Email sign in code generated via [sendSignInLinkToEmail].
  ActionCodeInfoOperationEmailSignIn = 4,
  /// Verify and change email code generated via [User.verifyBeforeUpdateEmail].
  ActionCodeInfoOperationVerifyAndChangeEmail = 5,
  /// Action code for reverting second factor addition.
  ActionCodeInfoOperationRevertSecondFactorAddition = 6,
};

@class PigeonMultiFactorSession;
@class PigeonPhoneMultiFactorAssertion;
@class PigeonMultiFactorInfo;
@class PigeonFirebaseApp;
@class PigeonActionCodeInfo;
@class PigeonActionCodeInfoData;
@class PigeonUserCredential;
@class PigeonAdditionalUserInfo;
@class PigeonAuthCredential;
@class PigeonUserInfo;
@class PigeonUserDetails;
@class PigeonActionCodeSettings;
@class PigeonFirebaseAuthSettings;
@class PigeonSignInProvider;
@class PigeonVerifyPhoneNumberRequest;
@class PigeonIdTokenResult;

@interface PigeonMultiFactorSession : NSObject
/// `init` unavailable to enforce nonnull fields, see the `make` class method.
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)makeWithId:(NSString *)id;
@property(nonatomic, copy) NSString *id;
@end

@interface PigeonPhoneMultiFactorAssertion : NSObject
/// `init` unavailable to enforce nonnull fields, see the `make` class method.
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)makeWithVerificationId:(NSString *)verificationId
                      verificationCode:(NSString *)verificationCode;
@property(nonatomic, copy) NSString *verificationId;
@property(nonatomic, copy) NSString *verificationCode;
@end

@interface PigeonMultiFactorInfo : NSObject
/// `init` unavailable to enforce nonnull fields, see the `make` class method.
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)makeWithDisplayName:(nullable NSString *)displayName
                enrollmentTimestamp:(NSNumber *)enrollmentTimestamp
                           factorId:(nullable NSString *)factorId
                                uid:(NSString *)uid
                        phoneNumber:(nullable NSString *)phoneNumber;
@property(nonatomic, copy, nullable) NSString *displayName;
@property(nonatomic, strong) NSNumber *enrollmentTimestamp;
@property(nonatomic, copy, nullable) NSString *factorId;
@property(nonatomic, copy) NSString *uid;
@property(nonatomic, copy, nullable) NSString *phoneNumber;
@end

@interface PigeonFirebaseApp : NSObject
/// `init` unavailable to enforce nonnull fields, see the `make` class method.
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)makeWithAppName:(NSString *)appName tenantId:(nullable NSString *)tenantId;
@property(nonatomic, copy) NSString *appName;
@property(nonatomic, copy, nullable) NSString *tenantId;
@end

@interface PigeonActionCodeInfo : NSObject
/// `init` unavailable to enforce nonnull fields, see the `make` class method.
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)makeWithOperation:(ActionCodeInfoOperation)operation
                             data:(PigeonActionCodeInfoData *)data;
@property(nonatomic, assign) ActionCodeInfoOperation operation;
@property(nonatomic, strong) PigeonActionCodeInfoData *data;
@end

@interface PigeonActionCodeInfoData : NSObject
+ (instancetype)makeWithEmail:(nullable NSString *)email
                previousEmail:(nullable NSString *)previousEmail;
@property(nonatomic, copy, nullable) NSString *email;
@property(nonatomic, copy, nullable) NSString *previousEmail;
@end

@interface PigeonUserCredential : NSObject
+ (instancetype)makeWithUser:(nullable PigeonUserDetails *)user
          additionalUserInfo:(nullable PigeonAdditionalUserInfo *)additionalUserInfo
                  credential:(nullable PigeonAuthCredential *)credential;
@property(nonatomic, strong, nullable) PigeonUserDetails *user;
@property(nonatomic, strong, nullable) PigeonAdditionalUserInfo *additionalUserInfo;
@property(nonatomic, strong, nullable) PigeonAuthCredential *credential;
@end

@interface PigeonAdditionalUserInfo : NSObject
/// `init` unavailable to enforce nonnull fields, see the `make` class method.
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)makeWithIsNewUser:(NSNumber *)isNewUser
                       providerId:(nullable NSString *)providerId
                         username:(nullable NSString *)username
                          profile:(nullable NSDictionary<NSString *, id> *)profile;
@property(nonatomic, strong) NSNumber *isNewUser;
@property(nonatomic, copy, nullable) NSString *providerId;
@property(nonatomic, copy, nullable) NSString *username;
@property(nonatomic, strong, nullable) NSDictionary<NSString *, id> *profile;
@end

@interface PigeonAuthCredential : NSObject
/// `init` unavailable to enforce nonnull fields, see the `make` class method.
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)makeWithProviderId:(NSString *)providerId
                      signInMethod:(NSString *)signInMethod
                          nativeId:(NSNumber *)nativeId
                       accessToken:(nullable NSString *)accessToken;
@property(nonatomic, copy) NSString *providerId;
@property(nonatomic, copy) NSString *signInMethod;
@property(nonatomic, strong) NSNumber *nativeId;
@property(nonatomic, copy, nullable) NSString *accessToken;
@end

@interface PigeonUserInfo : NSObject
/// `init` unavailable to enforce nonnull fields, see the `make` class method.
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)makeWithUid:(NSString *)uid
                      email:(nullable NSString *)email
                displayName:(nullable NSString *)displayName
                   photoUrl:(nullable NSString *)photoUrl
                phoneNumber:(nullable NSString *)phoneNumber
                isAnonymous:(NSNumber *)isAnonymous
            isEmailVerified:(NSNumber *)isEmailVerified
                 providerId:(nullable NSString *)providerId
                   tenantId:(nullable NSString *)tenantId
               refreshToken:(nullable NSString *)refreshToken
          creationTimestamp:(nullable NSNumber *)creationTimestamp
        lastSignInTimestamp:(nullable NSNumber *)lastSignInTimestamp;
@property(nonatomic, copy) NSString *uid;
@property(nonatomic, copy, nullable) NSString *email;
@property(nonatomic, copy, nullable) NSString *displayName;
@property(nonatomic, copy, nullable) NSString *photoUrl;
@property(nonatomic, copy, nullable) NSString *phoneNumber;
@property(nonatomic, strong) NSNumber *isAnonymous;
@property(nonatomic, strong) NSNumber *isEmailVerified;
@property(nonatomic, copy, nullable) NSString *providerId;
@property(nonatomic, copy, nullable) NSString *tenantId;
@property(nonatomic, copy, nullable) NSString *refreshToken;
@property(nonatomic, strong, nullable) NSNumber *creationTimestamp;
@property(nonatomic, strong, nullable) NSNumber *lastSignInTimestamp;
@end

@interface PigeonUserDetails : NSObject
/// `init` unavailable to enforce nonnull fields, see the `make` class method.
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)makeWithUserInfo:(PigeonUserInfo *)userInfo
                    providerData:(NSArray<PigeonUserInfo *> *)providerData;
@property(nonatomic, strong) PigeonUserInfo *userInfo;
@property(nonatomic, strong) NSArray<PigeonUserInfo *> *providerData;
@end

@interface PigeonActionCodeSettings : NSObject
/// `init` unavailable to enforce nonnull fields, see the `make` class method.
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)makeWithUrl:(NSString *)url
          dynamicLinkDomain:(nullable NSString *)dynamicLinkDomain
            handleCodeInApp:(NSNumber *)handleCodeInApp
                iOSBundleId:(nullable NSString *)iOSBundleId
         androidPackageName:(nullable NSString *)androidPackageName
          androidInstallApp:(NSNumber *)androidInstallApp
      androidMinimumVersion:(nullable NSString *)androidMinimumVersion;
@property(nonatomic, copy) NSString *url;
@property(nonatomic, copy, nullable) NSString *dynamicLinkDomain;
@property(nonatomic, strong) NSNumber *handleCodeInApp;
@property(nonatomic, copy, nullable) NSString *iOSBundleId;
@property(nonatomic, copy, nullable) NSString *androidPackageName;
@property(nonatomic, strong) NSNumber *androidInstallApp;
@property(nonatomic, copy, nullable) NSString *androidMinimumVersion;
@end

@interface PigeonFirebaseAuthSettings : NSObject
/// `init` unavailable to enforce nonnull fields, see the `make` class method.
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)makeWithAppVerificationDisabledForTesting:
                    (NSNumber *)appVerificationDisabledForTesting
                                          userAccessGroup:(nullable NSString *)userAccessGroup
                                              phoneNumber:(nullable NSString *)phoneNumber
                                                  smsCode:(nullable NSString *)smsCode
                                       forceRecaptchaFlow:(nullable NSNumber *)forceRecaptchaFlow;
@property(nonatomic, strong) NSNumber *appVerificationDisabledForTesting;
@property(nonatomic, copy, nullable) NSString *userAccessGroup;
@property(nonatomic, copy, nullable) NSString *phoneNumber;
@property(nonatomic, copy, nullable) NSString *smsCode;
@property(nonatomic, strong, nullable) NSNumber *forceRecaptchaFlow;
@end

@interface PigeonSignInProvider : NSObject
/// `init` unavailable to enforce nonnull fields, see the `make` class method.
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)makeWithProviderId:(NSString *)providerId
                            scopes:(nullable NSArray<NSString *> *)scopes
                  customParameters:
                      (nullable NSDictionary<NSString *, NSString *> *)customParameters;
@property(nonatomic, copy) NSString *providerId;
@property(nonatomic, strong, nullable) NSArray<NSString *> *scopes;
@property(nonatomic, strong, nullable) NSDictionary<NSString *, NSString *> *customParameters;
@end

@interface PigeonVerifyPhoneNumberRequest : NSObject
/// `init` unavailable to enforce nonnull fields, see the `make` class method.
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)makeWithPhoneNumber:(nullable NSString *)phoneNumber
                            timeout:(NSNumber *)timeout
                forceResendingToken:(nullable NSNumber *)forceResendingToken
     autoRetrievedSmsCodeForTesting:(nullable NSString *)autoRetrievedSmsCodeForTesting
                  multiFactorInfoId:(nullable NSString *)multiFactorInfoId
               multiFactorSessionId:(nullable NSString *)multiFactorSessionId;
@property(nonatomic, copy, nullable) NSString *phoneNumber;
@property(nonatomic, strong) NSNumber *timeout;
@property(nonatomic, strong, nullable) NSNumber *forceResendingToken;
@property(nonatomic, copy, nullable) NSString *autoRetrievedSmsCodeForTesting;
@property(nonatomic, copy, nullable) NSString *multiFactorInfoId;
@property(nonatomic, copy, nullable) NSString *multiFactorSessionId;
@end

@interface PigeonIdTokenResult : NSObject
+ (instancetype)makeWithToken:(nullable NSString *)token
          expirationTimestamp:(nullable NSNumber *)expirationTimestamp
                authTimestamp:(nullable NSNumber *)authTimestamp
            issuedAtTimestamp:(nullable NSNumber *)issuedAtTimestamp
               signInProvider:(nullable NSString *)signInProvider
                       claims:(nullable NSDictionary<NSString *, id> *)claims
           signInSecondFactor:(nullable NSString *)signInSecondFactor;
@property(nonatomic, copy, nullable) NSString *token;
@property(nonatomic, strong, nullable) NSNumber *expirationTimestamp;
@property(nonatomic, strong, nullable) NSNumber *authTimestamp;
@property(nonatomic, strong, nullable) NSNumber *issuedAtTimestamp;
@property(nonatomic, copy, nullable) NSString *signInProvider;
@property(nonatomic, strong, nullable) NSDictionary<NSString *, id> *claims;
@property(nonatomic, copy, nullable) NSString *signInSecondFactor;
@end

/// The codec used by FirebaseAuthHostApi.
NSObject<FlutterMessageCodec> *FirebaseAuthHostApiGetCodec(void);

@protocol FirebaseAuthHostApi
- (void)registerIdTokenListenerApp:(PigeonFirebaseApp *)app
                        completion:
                            (void (^)(NSString *_Nullable, FlutterError *_Nullable))completion;
- (void)registerAuthStateListenerApp:(PigeonFirebaseApp *)app
                          completion:
                              (void (^)(NSString *_Nullable, FlutterError *_Nullable))completion;
- (void)useEmulatorApp:(PigeonFirebaseApp *)app
                  host:(NSString *)host
                  port:(NSNumber *)port
            completion:(void (^)(FlutterError *_Nullable))completion;
- (void)applyActionCodeApp:(PigeonFirebaseApp *)app
                      code:(NSString *)code
                completion:(void (^)(FlutterError *_Nullable))completion;
- (void)checkActionCodeApp:(PigeonFirebaseApp *)app
                      code:(NSString *)code
                completion:
                    (void (^)(PigeonActionCodeInfo *_Nullable, FlutterError *_Nullable))completion;
- (void)confirmPasswordResetApp:(PigeonFirebaseApp *)app
                           code:(NSString *)code
                    newPassword:(NSString *)newPassword
                     completion:(void (^)(FlutterError *_Nullable))completion;
- (void)createUserWithEmailAndPasswordApp:(PigeonFirebaseApp *)app
                                    email:(NSString *)email
                                 password:(NSString *)password
                               completion:(void (^)(PigeonUserCredential *_Nullable,
                                                    FlutterError *_Nullable))completion;
- (void)signInAnonymouslyApp:(PigeonFirebaseApp *)app
                  completion:(void (^)(PigeonUserCredential *_Nullable,
                                       FlutterError *_Nullable))completion;
- (void)signInWithCredentialApp:(PigeonFirebaseApp *)app
                          input:(NSDictionary<NSString *, id> *)input
                     completion:(void (^)(PigeonUserCredential *_Nullable,
                                          FlutterError *_Nullable))completion;
- (void)signInWithCustomTokenApp:(PigeonFirebaseApp *)app
                           token:(NSString *)token
                      completion:(void (^)(PigeonUserCredential *_Nullable,
                                           FlutterError *_Nullable))completion;
- (void)signInWithEmailAndPasswordApp:(PigeonFirebaseApp *)app
                                email:(NSString *)email
                             password:(NSString *)password
                           completion:(void (^)(PigeonUserCredential *_Nullable,
                                                FlutterError *_Nullable))completion;
- (void)signInWithEmailLinkApp:(PigeonFirebaseApp *)app
                         email:(NSString *)email
                     emailLink:(NSString *)emailLink
                    completion:(void (^)(PigeonUserCredential *_Nullable,
                                         FlutterError *_Nullable))completion;
- (void)signInWithProviderApp:(PigeonFirebaseApp *)app
               signInProvider:(PigeonSignInProvider *)signInProvider
                   completion:(void (^)(PigeonUserCredential *_Nullable,
                                        FlutterError *_Nullable))completion;
- (void)signOutApp:(PigeonFirebaseApp *)app
        completion:(void (^)(FlutterError *_Nullable))completion;
- (void)fetchSignInMethodsForEmailApp:(PigeonFirebaseApp *)app
                                email:(NSString *)email
                           completion:(void (^)(NSArray<NSString *> *_Nullable,
                                                FlutterError *_Nullable))completion;
- (void)sendPasswordResetEmailApp:(PigeonFirebaseApp *)app
                            email:(NSString *)email
               actionCodeSettings:(nullable PigeonActionCodeSettings *)actionCodeSettings
                       completion:(void (^)(FlutterError *_Nullable))completion;
- (void)sendSignInLinkToEmailApp:(PigeonFirebaseApp *)app
                           email:(NSString *)email
              actionCodeSettings:(PigeonActionCodeSettings *)actionCodeSettings
                      completion:(void (^)(FlutterError *_Nullable))completion;
- (void)setLanguageCodeApp:(PigeonFirebaseApp *)app
              languageCode:(nullable NSString *)languageCode
                completion:(void (^)(NSString *_Nullable, FlutterError *_Nullable))completion;
- (void)setSettingsApp:(PigeonFirebaseApp *)app
              settings:(PigeonFirebaseAuthSettings *)settings
            completion:(void (^)(FlutterError *_Nullable))completion;
- (void)verifyPasswordResetCodeApp:(PigeonFirebaseApp *)app
                              code:(NSString *)code
                        completion:
                            (void (^)(NSString *_Nullable, FlutterError *_Nullable))completion;
- (void)verifyPhoneNumberApp:(PigeonFirebaseApp *)app
                     request:(PigeonVerifyPhoneNumberRequest *)request
                  completion:(void (^)(NSString *_Nullable, FlutterError *_Nullable))completion;
@end

extern void FirebaseAuthHostApiSetup(id<FlutterBinaryMessenger> binaryMessenger,
                                     NSObject<FirebaseAuthHostApi> *_Nullable api);

/// The codec used by FirebaseAuthUserHostApi.
NSObject<FlutterMessageCodec> *FirebaseAuthUserHostApiGetCodec(void);

@protocol FirebaseAuthUserHostApi
- (void)deleteApp:(PigeonFirebaseApp *)app completion:(void (^)(FlutterError *_Nullable))completion;
- (void)getIdTokenApp:(PigeonFirebaseApp *)app
         forceRefresh:(NSNumber *)forceRefresh
           completion:(void (^)(PigeonIdTokenResult *_Nullable, FlutterError *_Nullable))completion;
- (void)linkWithCredentialApp:(PigeonFirebaseApp *)app
                        input:(NSDictionary<NSString *, id> *)input
                   completion:(void (^)(PigeonUserCredential *_Nullable,
                                        FlutterError *_Nullable))completion;
- (void)linkWithProviderApp:(PigeonFirebaseApp *)app
             signInProvider:(PigeonSignInProvider *)signInProvider
                 completion:
                     (void (^)(PigeonUserCredential *_Nullable, FlutterError *_Nullable))completion;
- (void)reauthenticateWithCredentialApp:(PigeonFirebaseApp *)app
                                  input:(NSDictionary<NSString *, id> *)input
                             completion:(void (^)(PigeonUserCredential *_Nullable,
                                                  FlutterError *_Nullable))completion;
- (void)reauthenticateWithProviderApp:(PigeonFirebaseApp *)app
                       signInProvider:(PigeonSignInProvider *)signInProvider
                           completion:(void (^)(PigeonUserCredential *_Nullable,
                                                FlutterError *_Nullable))completion;
- (void)reloadApp:(PigeonFirebaseApp *)app
       completion:(void (^)(PigeonUserDetails *_Nullable, FlutterError *_Nullable))completion;
- (void)sendEmailVerificationApp:(PigeonFirebaseApp *)app
              actionCodeSettings:(nullable PigeonActionCodeSettings *)actionCodeSettings
                      completion:(void (^)(FlutterError *_Nullable))completion;
@end

extern void FirebaseAuthUserHostApiSetup(id<FlutterBinaryMessenger> binaryMessenger,
                                         NSObject<FirebaseAuthUserHostApi> *_Nullable api);

/// The codec used by MultiFactorUserHostApi.
NSObject<FlutterMessageCodec> *MultiFactorUserHostApiGetCodec(void);

@protocol MultiFactorUserHostApi
- (void)enrollPhoneAppName:(NSString *)appName
                 assertion:(PigeonPhoneMultiFactorAssertion *)assertion
               displayName:(nullable NSString *)displayName
                completion:(void (^)(FlutterError *_Nullable))completion;
- (void)getSessionAppName:(NSString *)appName
               completion:(void (^)(PigeonMultiFactorSession *_Nullable,
                                    FlutterError *_Nullable))completion;
- (void)unenrollAppName:(NSString *)appName
              factorUid:(nullable NSString *)factorUid
             completion:(void (^)(FlutterError *_Nullable))completion;
- (void)getEnrolledFactorsAppName:(NSString *)appName
                       completion:(void (^)(NSArray<PigeonMultiFactorInfo *> *_Nullable,
                                            FlutterError *_Nullable))completion;
@end

extern void MultiFactorUserHostApiSetup(id<FlutterBinaryMessenger> binaryMessenger,
                                        NSObject<MultiFactorUserHostApi> *_Nullable api);

/// The codec used by MultiFactoResolverHostApi.
NSObject<FlutterMessageCodec> *MultiFactoResolverHostApiGetCodec(void);

@protocol MultiFactoResolverHostApi
- (void)resolveSignInResolverId:(NSString *)resolverId
                      assertion:(PigeonPhoneMultiFactorAssertion *)assertion
                     completion:(void (^)(NSDictionary<NSString *, id> *_Nullable,
                                          FlutterError *_Nullable))completion;
@end

extern void MultiFactoResolverHostApiSetup(id<FlutterBinaryMessenger> binaryMessenger,
                                           NSObject<MultiFactoResolverHostApi> *_Nullable api);

/// The codec used by GenerateInterfaces.
NSObject<FlutterMessageCodec> *GenerateInterfacesGetCodec(void);

/// Only used to generate the object interface that are use outside of the Pigeon interface
@protocol GenerateInterfaces
- (void)generateInterfacesInfo:(PigeonMultiFactorInfo *)info
                         error:(FlutterError *_Nullable *_Nonnull)error;
@end

extern void GenerateInterfacesSetup(id<FlutterBinaryMessenger> binaryMessenger,
                                    NSObject<GenerateInterfaces> *_Nullable api);

NS_ASSUME_NONNULL_END
