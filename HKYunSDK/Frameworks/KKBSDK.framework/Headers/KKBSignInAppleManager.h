//
//  KKBSignInAppleManager.h
//  KKBSDK
//
//  Created by Duane on 2020/4/10.
//  Copyright © 2020 KaiKeBa. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <KKBLibrary/KKBBasicMacro.h>

NS_ASSUME_NONNULL_BEGIN

@interface KKBSignInAppleModel : NSObject

@property (nonatomic, copy) NSString  *user;
@property (nonatomic, copy) NSString  *familyName;
@property (nonatomic, copy) NSString  *givenName;
@property (nonatomic, copy) NSString  *email;
@property (nonatomic, copy) NSString  *identityToken;
@property (nonatomic, copy) NSString  *authorizationCode;

@end

typedef void(^KKBSignInAppleBlock)(KKBSignInAppleModel * _Nullable authModel, NSError * _Nullable error);

@interface KKBSignInAppleManager : NSObject

DEFINE_SINGLETON_FOR_H(KKBSignInAppleManager)

// 处理授权
- (void)signInWithApple:(KKBSignInAppleBlock)completion;

@end

NS_ASSUME_NONNULL_END
