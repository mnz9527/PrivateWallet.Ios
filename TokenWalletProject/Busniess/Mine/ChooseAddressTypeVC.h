//
//  ChooseAddressTypeVC.h
//  TokenWalletProject
//
//  Created by fchain on 2021/8/10.
//  Copyright © 2021 Zinkham. All rights reserved.
//

#import "BaseViewController.h"

NS_ASSUME_NONNULL_BEGIN

@interface ChooseAddressTypeVC : BaseViewController

@property(nonatomic, strong) ChooseCoinTypeModel *chooseModel;
@property (nonatomic, copy) void(^chooseBlock)(id model);

@end

NS_ASSUME_NONNULL_END
