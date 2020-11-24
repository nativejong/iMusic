//
//  VideoNavigationController.swift
//  Example
//
//  Created by John Blaine on 11/24/20.
//  Copyright © 2020 John Blaine. All rights reserved.
//

import UIKit

class VideoNavigationController: UINavigationController {

//    override init(rootViewController: UIViewController) {
//        super.init(rootViewController: rootViewController)
//    }
//
//    required init?(coder aDecoder: NSCoder) {
//        super.init(coder: aDecoder)
//    }

//    required init?(coder aDecoder: NSCoder) {
//        fatalError("init(coder:) has not been implemented")
//    }
    
    override func viewDidLoad() {
        super.viewDidLoad()

        let vc = VideoViewController()
        self.pushViewController(vc, animated: false)
        
        let im = self.resizeImage(image: UIImage(named: "video")! )
        
        self.tabBarItem = UITabBarItem(title: "Video", image: im, tag: 1 )
        
//        self.tabBarItem.image = UIImage(named: "video");
//        self.tabBarItem.selectedImage = UIImage(named: "video");
    }
    
    func resizeImage(image: UIImage) -> UIImage {
        let newSize: CGSize = CGSize(width: 20,  height: 20 )
        let rect = CGRect(x: 0, y: 0, width: newSize.width, height: newSize.height)

        UIGraphicsBeginImageContextWithOptions(newSize, false, 1.0)
        image.draw(in: rect)
        let newImage = UIGraphicsGetImageFromCurrentImageContext()
        UIGraphicsEndImageContext()

        return newImage!
    }
}
