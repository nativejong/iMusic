//
//  MusicNavigationController.swift
//  Example
//
//  Created by John Blaine on 11/24/20.
//  Copyright © 2020 John Blaine. All rights reserved.
//

import UIKit

class MusicNavigationController: UINavigationController {

    override func viewDidLoad() {
        super.viewDidLoad()

        let vc = MusicViewController()
        self.pushViewController(vc, animated: false)
        
        let im = self.resizeImage(image: UIImage(named: "notes")! )
        
        self.tabBarItem = UITabBarItem(title: "Music", image: im, tag: 0 )
        
        
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
