//
//  KKBSDKJobPositionListModel.h
//  KKBSDK
//
//  Created by 西门桃桃 on 2020/4/16.
//  Copyright © 2020 KaiKeBa. All rights reserved.
//

#import <KKBSDK/KKBSDK.h>
@class KKBSDKJobPositionModel;

NS_ASSUME_NONNULL_BEGIN

@interface KKBSDKJobPositionListModel : KKBBaseModel

@property (nonatomic, assign) NSInteger total;
@property (nonatomic, assign) NSInteger page;
@property (nonatomic, assign) BOOL isMore; // 是否还有下一页数据 1、有 0、没有
@property (nonatomic, copy) NSArray<KKBSDKJobPositionModel *> *list;

@end

NS_ASSUME_NONNULL_END
