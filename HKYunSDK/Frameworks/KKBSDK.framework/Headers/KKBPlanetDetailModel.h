//
//  KKBPlanetDetailModel.h
//  KaiKeBa
//
//  Created by zddMac on 2019/11/2.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import "KKBBaseModel.h"

NS_ASSUME_NONNULL_BEGIN

@class KKBPlanetPublicCourseModel;
@class KKBPlanetExamModel;
@class KKBPlanetMicroCourseModel;
@class KKBGalaxyModel;
@class KKBPlanetQAModel;
@class KKBPlanetProductModel;
@interface KKBPlanetDetailModel : KKBBaseModel
@property (nonatomic, assign) uintID nodeId; //星球Id
@property (nonatomic, strong) NSString *name;//星球名
@property (nonatomic, assign) BOOL isBuild; // Yes：星球建设中 No:建设完成
@property (nonatomic, strong) NSString *sellPoint; //卖点
@property (nonatomic, assign) NSInteger status; //0 星球未启用  1星球可用
@property (nonatomic, strong) NSString *planetDesc; //星球描述
@property (nonatomic, strong) NSString *mobileCoverImgPath; //星球封面
@property (nonatomic, assign) NSInteger askSwitch; //问答开关 1 开启 0关闭
@property (nonatomic, assign) NSInteger studentNodeApplyStatus; //报名状态 1 已报名  0 未报名
@property (nonatomic, assign) NSInteger userOwnerStatus; //评测完成状态 ： 0 未参与 ，1 参与未通过  ，2 已通过
@property (nonatomic, assign) NSInteger userCollectStatus; //用户星球收藏状态 0 未收藏  1 已收藏
@property (nonatomic, assign) NSUInteger totalQuestionNum; //星球内包含的总的问答数

@property (nonatomic, strong) NSArray<KKBGalaxyModel *> *galaxyList; //星系列表
@property (nonatomic, strong) KKBPlanetPublicCourseModel *publicCourse; //公开课
@property (nonatomic, strong) KKBPlanetExamModel *examInfo; //测评
@property (nonatomic, strong) NSArray <KKBPlanetQAModel *> *defaultQAList; //问答列表
@property (nonatomic, strong) KKBPlanetMicroCourseModel *microCourse; //微课
@property (nonatomic, strong) KKBPlanetProductModel *nodeProductDetails;//商品信息


@end

NS_ASSUME_NONNULL_END
