//
//  KKBAdInfoModel.h
//  KaiKeBa
//
//  Created by Duane on 2019/11/30.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import "KKBBaseModel.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, KKBAdOpenRouteType)
{
   KKBAdOpenRouteType_NAH5=1, //app内h5
   KKBAdOpenRouteType_NASarari=2, //app内浏览器
};

@class KKBAdModel;

@interface  KKBAdListModel: KKBBaseModel

@property (nonatomic, strong)NSArray<KKBAdModel *> *adList;

@end

@interface KKBAdModel : KKBBaseModel <NSCoding, NSCopying>

@property (nonatomic, assign) intID ID; // 更新判断
@property (nonatomic, strong) NSString *title; //名称
@property (nonatomic, strong) NSString *jumpUrl; // 跳转url
@property (nonatomic, strong) NSString *imgUrl; //图片链接 "http://test.res.kaikeba.com/other/123/20191129155825-23803/FutoqoUht3ZnGTfMgvA6q8Ux_v1C.png",//图片
@property (nonatomic, assign) NSInteger adTime; // 广告秒数

@property (nonatomic, assign) BOOL displayIcon;//首页广告icon是否显示 0:不显示 1:显示
@property (nonatomic, strong) NSString *iconUrl;//icon 图片地址

@property (nonatomic,assign)NSInteger order;

@property (nonatomic, assign)KKBAdOpenRouteType openRoute;


@end

@interface KKBAdInfoModel : KKBBaseModel <NSCoding, NSCopying>

@property (nonatomic, strong) KKBAdModel *appPop;
@property (nonatomic, strong) KKBAdModel *appScreen;

@end

NS_ASSUME_NONNULL_END
