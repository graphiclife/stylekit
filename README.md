StyleKit
========

Convenience macros for defining text-editor-like styles for Objective-C.

License
-------

MIT License

Example Usage
-------------

Define a style using SKStyle( stylename, (attribute-dictionary) ) =>

    SKStyle(header, (@{ @"font" : [UIFont boldSystemFontOfSize:17.0],
                    @"textColor" : [UIColor blackColor],
                    @"backgroundColor" : [UIColor clearColor] }));

Extend a style using SKStyleExt( stylename, parentstylename, (attribute-dictionary) ) =>

    SKStyleExt(blueheader, header, (@{ @"textColor" : [UIColor blueColor] }));

Apply a style on an objective-c object = >

    UILabel *label = [[UILabel alloc] initWithFrame:CGRectMake(0.0, 0.0, 320.0, 20.0 )];

    label.text = @"This header is blue";

    SKApply(blueheader, label);
