//
//  KKBSDKJobFilterModel.h
//  KKBSDK
//
//  Created by 西门桃桃 on 2020/4/14.
//  Copyright © 2020 KaiKeBa. All rights reserved.
//

#import <KKBSDK/KKBSDK.h>

NS_ASSUME_NONNULL_BEGIN

@interface KKBSDKJobFilterModel : KKBBaseModel

@property (nonatomic, assign) NSInteger ID;
@property (nonatomic, assign) NSInteger salaryMax;
@property (nonatomic, assign) NSInteger salaryMin;
@property (nonatomic, strong) NSString * value;

@property (nonatomic, assign) BOOL isSelected;//判断是否选中n按钮

@end

NS_ASSUME_NONNULL_END
