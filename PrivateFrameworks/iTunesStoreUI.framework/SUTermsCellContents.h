/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SULinkControl, UITextLabel;

@interface SUTermsCellContents : SUTransparentCellContents {
    UITextLabel *_emailLabel;
    NSUInteger _style;
    SULinkControl *_termsAndConditionsControl;
}

+ (float)defaultHeightForPosition:(struct { NSUInteger x1; NSUInteger x2; })arg1;

- (id)_emailLabel;
- (NSUInteger)_linkStyleForStyle:(NSUInteger)arg1;
- (void)_showTermsAndConditions:(id)arg1;
- (id)_termsAndConditionsControl;
- (void)_updateEmailLabel;
- (void)dealloc;
- (id)init;
- (void)layoutSubviews;
- (void)setStyle:(NSUInteger)arg1;

@end