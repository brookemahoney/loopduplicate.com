<!DOCTYPE html>
<html>
  <head>
    <title>LoopDuplicate</title>
    <meta charset="utf-8">
		<meta name="viewport" content="width=device-width, user-scalable=no, minimum-scale=1.0, maximum-scale=1.0">
    <link type="text/css" rel="stylesheet" href="/sites/all/themes/jeffytheme/css/main.css" media="all" />
    <script type="text/javascript" src="/sites/all/libraries/threejs/three.min.js"></script>
    <script type="text/javascript" src="/sites/all/themes/jeffytheme/js/Detector.js"></script>
    <script type="text/javascript" src="/sites/all/themes/jeffytheme/js/stats.min.js"></script>
  </head>
  <body>
    <div id="container"></div>
    <script>

			if ( ! Detector.webgl ) Detector.addGetWebGLMessage();

			var container, stats;

			var camera, scene, renderer;

			var mesh, light;

			var mouseX = 0, mouseY = 0;

			var windowHalfX = window.innerWidth / 2;
			var windowHalfY = window.innerHeight / 2;

			init();
			animate();

			function init() {

				container = document.getElementById( 'container' );

				camera = new THREE.PerspectiveCamera( 45, window.innerWidth / window.innerHeight, 1, 25000 );
				camera.position.z = 15000;

				scene = new THREE.Scene();

				light = new THREE.DirectionalLight( 0xff5400 );
				light.position.set( 0, 0, 1 ).normalize();
				scene.add( light );
				light1 = new THREE.DirectionalLight( 0xff5400 );
				light1.position.set( 1, 0, 0 ).normalize();
				scene.add( light1 );
				light2 = new THREE.DirectionalLight( 0xff5400 );
				light2.position.set( 0, 1, 0 ).normalize();
				scene.add( light2 );

				var loader = new THREE.JSONLoader();

				loader.load( "sites/all/themes/jeffytheme/js/loopDuplicateBlenderBlocks07.js", createScene1 );

				renderer = new THREE.WebGLRenderer( { antialias: true } );
				renderer.setSize( window.innerWidth, window.innerHeight );

				container.appendChild( renderer.domElement );

				stats = new Stats();
				stats.domElement.style.position = 'absolute';
				stats.domElement.style.top = '0px';
				container.appendChild( stats.domElement );

				document.addEventListener( 'mousemove', onDocumentMouseMove, false );

				window.addEventListener( 'resize', onWindowResize, false );

			}

			function onWindowResize() {

				windowHalfX = window.innerWidth / 2;
				windowHalfY = window.innerHeight / 2;

				camera.aspect = window.innerWidth / window.innerHeight;
				camera.updateProjectionMatrix();

				renderer.setSize( window.innerWidth, window.innerHeight );

			}

			function createScene1( geometry, materials ) {

				materials[ 0 ].shading = THREE.FlatShading;

				mesh = new THREE.Mesh( geometry, new THREE.MeshFaceMaterial( materials ) );
				mesh.position.y = 0;
				mesh.rotation.x = 90;
				mesh.scale.x = mesh.scale.y = mesh.scale.z = 400;
				scene.add( mesh );

			}

			function onDocumentMouseMove( event ) {

				mouseX = ( event.clientX - windowHalfX );
				mouseY = ( event.clientY - windowHalfY );

			}

			//

			function animate() {

				requestAnimationFrame( animate );

				render();
				stats.update();

			}

			function render() {

				camera.position.x += ( mouseX - camera.position.x ) * 0.05;
				camera.position.y += ( - mouseY - camera.position.y ) * 0.05;

				camera.lookAt( scene.position );

				if ( mesh ) {

					mesh.rotation.x += 0.005;
					mesh.rotation.y += 0.005;
				}

				renderer.render( scene, camera );

			}

		</script>
  </body>
</html>
