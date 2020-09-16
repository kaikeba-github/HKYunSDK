//
//  KKBSDKCompanyModel.h
//  KKBSDK
//
//  Created by Duane on 2020/3/25.
//  Copyright © 2020 KaiKeBa. All rights reserved.
//

#import <KKBSDK/KKBBaseModel.h>

@interface KKBSDKCompanyModel : KKBBaseModel

@property(nonatomic, assign) uintID companyId;
@property(nonatomic, strong) NSString *companyName;
@property(nonatomic, strong) NSString *logo;
@property(nonatomic, strong) NSString *openScreenPicUrl;
@property(nonatomic, strong) NSString *info;

@property(nonatomic, strong) NSString *creditCode;
@property(nonatomic, strong) NSString *address;
@property(nonatomic, strong) NSString *industry;
@property(nonatomic, strong) NSString *business;
@property(nonatomic, strong) NSString *technicalArea;
@property(nonatomic, strong) NSString *expireTrainMethod;
@property(nonatomic, strong) NSString *contacter;
@property(nonatomic, strong) NSString *companyPosition;
@property(nonatomic, assign) NSInteger status;

@property(nonatomic, assign) uintID orgId;
@property(nonatomic, strong) NSString *orgName;

@property(nonatomic, strong) NSString *employeeName;
@property(nonatomic, strong) NSString *email;
@property(nonatomic, strong) NSString *mobile;
@property(nonatomic, strong) NSString *level;

@end
