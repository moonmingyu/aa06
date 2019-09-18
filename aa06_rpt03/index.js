var express = require('express');
var router = express.Router();

/* GET home page. */
router.get('/', function(req, res, next) {
  res.render('index', { title: 'Express' });
});
router.get('/aa06', function(req, res, next){
	res.render('aa06', {title: 'Express App', id:'aa06', name : 'moon'});
})
module.exports = router;
