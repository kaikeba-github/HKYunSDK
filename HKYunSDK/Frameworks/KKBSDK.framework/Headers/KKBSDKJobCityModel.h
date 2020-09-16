//
//  KKBSDKJobCityModel.h
//  KKBSDK
//
//  Created by 西门桃桃 on 2020/4/14.
//  Copyright © 2020 KaiKeBa. All rights reserved.
//

#import <KKBSDK/KKBSDK.h>

NS_ASSUME_NONNULL_BEGIN

@interface KKBSDKJobCityModel : KKBBaseModel

@property (nonatomic, strong) NSString * city;
@property (nonatomic, strong) NSString * cityid;
@property (nonatomic, strong) NSString * firstLetter;
@property (nonatomic, assign) NSInteger ID;
@property (nonatomic, strong) NSString * provinceid;

@end

NS_ASSUME_NONNULL_END
