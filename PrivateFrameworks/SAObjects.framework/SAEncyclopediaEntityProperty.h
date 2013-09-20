/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSNumber, NSString;

@interface SAEncyclopediaEntityProperty : AceObject <SAAceSerializable> {
}

@property(copy) NSString * name;
@property(copy) NSNumber * selected;
@property(copy) NSString * value;
@property(copy) NSString * valueAnnotation;

+ (id)property;
+ (id)propertyWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)name;
- (id)selected;
- (void)setName:(id)arg1;
- (void)setSelected:(id)arg1;
- (void)setValue:(id)arg1;
- (void)setValueAnnotation:(id)arg1;
- (id)value;
- (id)valueAnnotation;

@end