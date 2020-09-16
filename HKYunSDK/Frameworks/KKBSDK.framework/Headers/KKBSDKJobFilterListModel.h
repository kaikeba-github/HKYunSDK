//
//  KKBSDKJobFilterListModel.h
//  KKBSDK
//
//  Created by 西门桃桃 on 2020/4/15.
//  Copyright © 2020 KaiKeBa. All rights reserved.
//

#import <KKBSDK/KKBSDK.h>
@class KKBSDKJobFilterModel;

NS_ASSUME_NONNULL_BEGIN

@interface KKBSDKJobFilterListModel : KKBBaseModel

@property (nonatomic, strong) NSString * selectKey;
@property (nonatomic, strong) NSString * selectOption;
@property (nonatomic, strong) NSString * selectRadio;//1单选，2多选
@property (nonatomic, strong) NSArray<KKBSDKJobFilterModel *> * list;

@end

NS_ASSUME_NONNULL_END
