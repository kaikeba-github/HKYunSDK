//
//  KKBPlanetPayChannelModel.h
//  KaiKeBa
//
//  Created by zddMac on 2019/11/5.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import "KKBBaseModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface KKBPlanetPayChannelModel : KKBBaseModel

@property (nonatomic, assign)uintID payChannelId;
@property (nonatomic, strong)NSString *name;
@property (nonatomic, strong)NSString *cls;
@property (nonatomic, strong)NSString *icon;
@property (nonatomic, strong)NSString *code; //iOS="INNER_KKB"


@end

NS_ASSUME_NONNULL_END
