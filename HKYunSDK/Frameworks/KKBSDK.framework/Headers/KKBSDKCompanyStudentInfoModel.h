//
//  KKBSDKCompanyStudentInfoModel.h
//  KKBSDK
//
//  Created by Duane on 2020/3/26.
//  Copyright © 2020 KaiKeBa. All rights reserved.
//

#import <KKBSDK/KKBBaseModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface KKBSDKCompanyStudentInfoModel : KKBBaseModel

@property(nonatomic, assign) uintID uid;
@property(nonatomic, assign) NSInteger status;
@property(nonatomic, assign) uintID employeeId;
@property(nonatomic, strong) NSString *employeeName;
@property(nonatomic, strong) NSString *email;
@property(nonatomic, strong) NSString *mobile;
@property(nonatomic, assign) uintID orgId;
@property(nonatomic, strong) NSString *orgName;
@property(nonatomic, strong) NSString *employeePosition;
@property(nonatomic, strong) NSString *employeeLevel;

@end

NS_ASSUME_NONNULL_END
