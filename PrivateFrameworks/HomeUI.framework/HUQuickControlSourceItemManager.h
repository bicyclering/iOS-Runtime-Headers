/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUQuickControlSourceItemManager : HFItemManager {
    NSSet * _controlItems;
    HFStaticItemProvider * _staticItemProvider;
}

@property (nonatomic, copy) NSSet *controlItems;
@property (nonatomic, retain) HFStaticItemProvider *staticItemProvider;

- (void).cxx_destruct;
- (void)_createItemProvidersWithHome:(id)arg1;
- (id)_itemProviders;
- (id /* block */)_standardReadValidator;
- (id)controlItems;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 controlItems:(id)arg3;
- (void)setControlItems:(id)arg1;
- (void)setStaticItemProvider:(id)arg1;
- (id)staticItemProvider;

@end
