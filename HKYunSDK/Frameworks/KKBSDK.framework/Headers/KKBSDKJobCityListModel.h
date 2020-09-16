//
//  KKBSDKJobCityListModel.h
//  KKBSDK
//
//  Created by 西门桃桃 on 2020/4/14.
//  Copyright © 2020 KaiKeBa. All rights reserved.
//

#import <KKBSDK/KKBSDK.h>
@class KKBSDKJobCityModel;

NS_ASSUME_NONNULL_BEGIN

@interface KKBSDKJobCityListModel : KKBBaseModel

@property (nonatomic, strong) NSString * anchor;
@property (nonatomic, strong) NSArray<KKBSDKJobCityModel *> * list;

@end

NS_ASSUME_NONNULL_END
