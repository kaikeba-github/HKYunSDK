//
//  KKBPayChannelModel.h
//  KaiKeBa
//
//  Created by zddMac on 2019/8/21.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import "KKBBaseModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface KKBPayChannelModel : KKBBaseModel
@property (nonatomic,assign)uintID itemId;
@property (nonatomic,assign)uintID payChannelId;
@property (nonatomic,strong)NSString *name;
@property (nonatomic,assign)NSUInteger createTime;
@property (nonatomic,strong)NSString *code;
@property (nonatomic,strong)NSString *endpoint;

@end

NS_ASSUME_NONNULL_END
