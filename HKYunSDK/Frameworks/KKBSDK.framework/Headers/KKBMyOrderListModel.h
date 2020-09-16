//
//  KKBMyOrderListModel.h
//  KaiKeBa
//
//  Created by Duane on 2019/11/5.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import "KKBMyOrderListModel.h"
#import "KKBCourseContractState.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, KKBOrderSource) {
    KKBOrderSource_None, // 未知
    KKBOrderSource_Planet, // 星球
    KKBOrderSource_Course, // 大课
    KKBOrderSource_Vip, // 会员
};

@interface KKBMyOrderModel : KKBBaseModel

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *thumbnail;
@property (nonatomic, copy) NSString *amount;
@property (nonatomic, copy) NSDate *createDate;
@property (nonatomic, copy) NSString *no;
@property (nonatomic, copy) NSString *channelName;
@property (nonatomic, copy) NSString *channelIcon;
@property (nonatomic, copy) NSString *merchantSource; // world 星球 //bigCourse 大课 //VipCard 会员
@property (nonatomic, assign) uintID merchantCode; // 对应的id
@property (nonatomic, copy) NSString *codeName; // world 星球 //bigCourse 大课 //VipCard 会员 对应的名称，目前只需支持星球名称

@property (nonatomic, assign) KKBCourseContractStatus contractStatus;
@property (nonatomic, copy) NSString *contractName;
@property (nonatomic, copy) NSString *contractUri;

- (KKBOrderSource)getOrderSource;

@end

@interface KKBMyOrderListModel : KKBBaseModel

@property (nonatomic, assign) NSInteger page;
@property (nonatomic, assign) NSInteger limit;
@property (nonatomic, assign) BOOL hasMore;
@property (nonatomic, copy) NSArray<KKBMyOrderModel *> *list;

@end

NS_ASSUME_NONNULL_END
