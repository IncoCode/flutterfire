// Autogenerated from Pigeon (v10.1.3), do not edit directly.
// See also: https://pub.dev/packages/pigeon

#import "messages.g.h"

#if TARGET_OS_OSX
#import <FlutterMacOS/FlutterMacOS.h>
#else
#if TARGET_OS_OSX
#import <FlutterMacOS/FlutterMacOS.h>
#else
#import <Flutter/Flutter.h>
#endif
#endif

#if !__has_feature(objc_arc)
#error File requires ARC to be enabled.
#endif

static NSArray *wrapResult(id result, FlutterError *error) {
  if (error) {
    return @[
      error.code ?: [NSNull null], error.message ?: [NSNull null], error.details ?: [NSNull null]
    ];
  }
  return @[ result ?: [NSNull null] ];
}
static id GetNullableObjectAtIndex(NSArray *array, NSInteger key) {
  id result = array[key];
  return (result == [NSNull null]) ? nil : result;
}

@interface PigeonFirebaseApp ()
+ (PigeonFirebaseApp *)fromList:(NSArray *)list;
+ (nullable PigeonFirebaseApp *)nullableFromList:(NSArray *)list;
- (NSArray *)toList;
@end

@implementation PigeonFirebaseApp
+ (instancetype)makeWithAppName:(NSString *)appName {
  PigeonFirebaseApp *pigeonResult = [[PigeonFirebaseApp alloc] init];
  pigeonResult.appName = appName;
  return pigeonResult;
}
+ (PigeonFirebaseApp *)fromList:(NSArray *)list {
  PigeonFirebaseApp *pigeonResult = [[PigeonFirebaseApp alloc] init];
  pigeonResult.appName = GetNullableObjectAtIndex(list, 0);
  NSAssert(pigeonResult.appName != nil, @"");
  return pigeonResult;
}
+ (nullable PigeonFirebaseApp *)nullableFromList:(NSArray *)list {
  return (list) ? [PigeonFirebaseApp fromList:list] : nil;
}
- (NSArray *)toList {
  return @[
    (self.appName ?: [NSNull null]),
  ];
}
@end

@interface FirebaseFirestoreHostApiCodecReader : FlutterStandardReader
@end
@implementation FirebaseFirestoreHostApiCodecReader
- (nullable id)readValueOfType:(UInt8)type {
  switch (type) {
    case 128:
      return [PigeonFirebaseApp fromList:[self readValue]];
    default:
      return [super readValueOfType:type];
  }
}
@end

@interface FirebaseFirestoreHostApiCodecWriter : FlutterStandardWriter
@end
@implementation FirebaseFirestoreHostApiCodecWriter
- (void)writeValue:(id)value {
  if ([value isKindOfClass:[PigeonFirebaseApp class]]) {
    [self writeByte:128];
    [self writeValue:[value toList]];
  } else {
    [super writeValue:value];
  }
}
@end

@interface FirebaseFirestoreHostApiCodecReaderWriter : FlutterStandardReaderWriter
@end
@implementation FirebaseFirestoreHostApiCodecReaderWriter
- (FlutterStandardWriter *)writerWithData:(NSMutableData *)data {
  return [[FirebaseFirestoreHostApiCodecWriter alloc] initWithData:data];
}
- (FlutterStandardReader *)readerWithData:(NSData *)data {
  return [[FirebaseFirestoreHostApiCodecReader alloc] initWithData:data];
}
@end

NSObject<FlutterMessageCodec> *FirebaseFirestoreHostApiGetCodec(void) {
  static FlutterStandardMessageCodec *sSharedObject = nil;
  static dispatch_once_t sPred = 0;
  dispatch_once(&sPred, ^{
    FirebaseFirestoreHostApiCodecReaderWriter *readerWriter =
        [[FirebaseFirestoreHostApiCodecReaderWriter alloc] init];
    sSharedObject = [FlutterStandardMessageCodec codecWithReaderWriter:readerWriter];
  });
  return sSharedObject;
}

void FirebaseFirestoreHostApiSetup(id<FlutterBinaryMessenger> binaryMessenger,
                                   NSObject<FirebaseFirestoreHostApi> *api) {
  {
    FlutterBasicMessageChannel *channel = [[FlutterBasicMessageChannel alloc]
           initWithName:@"dev.flutter.pigeon.FirebaseFirestoreHostApi.registerIdTokenListener"
        binaryMessenger:binaryMessenger
                  codec:FirebaseFirestoreHostApiGetCodec()];
    if (api) {
      NSCAssert([api respondsToSelector:@selector(registerIdTokenListenerApp:completion:)],
                @"FirebaseFirestoreHostApi api (%@) doesn't respond to "
                @"@selector(registerIdTokenListenerApp:completion:)",
                api);
      [channel setMessageHandler:^(id _Nullable message, FlutterReply callback) {
        NSArray *args = message;
        PigeonFirebaseApp *arg_app = GetNullableObjectAtIndex(args, 0);
        [api registerIdTokenListenerApp:arg_app
                             completion:^(NSString *_Nullable output,
                                          FlutterError *_Nullable error) {
                               callback(wrapResult(output, error));
                             }];
      }];
    } else {
      [channel setMessageHandler:nil];
    }
  }
}