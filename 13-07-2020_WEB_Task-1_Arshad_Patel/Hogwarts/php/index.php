<?php
include('db.php');
session_start();
if (isset($_POST['submit'])){
    $id=$_POST['id'];
    $password=$_POST['password'];

    $query = "SELECT*FROM `hogwarts` WHERE `stu_id`='$id' AND `password`='$password'";
    $run = mysqli_query($con,$query);
    if(mysqli_num_rows($run)==1){
        $user_row = mysqli_fetch_assoc($run);
    }
    else
    {
        echo "No Student Found";
        die;
    }
}
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Hogwarts School Of Wizardary</title>
    <link rel="icon" href="../images/logo.png">
    <link rel="stylesheet" href="https://stackpath.bootstrapcdn.com/font-awesome/4.7.0/css/font-awesome.min.css">
    <link rel="stylesheet" href="../css/index.css">
</head>
<body >
<h1 align="center" >Welcome, <?php echo "".$user_row["stu_name"]?>.</h1>
<table align="center">
    <tr align="center">
        <th align="center">ID</th>
        <th align="center">Branch</th>
        <th align="center">CGPA</th>
    </tr>
    <tr align="center">
        <td align="center"><?php echo "".$user_row["stu_id"]?></td>
        <td align="center"><?php echo "".$user_row["stu_branch"]?></td>
        <td align="center"><?php echo "".$user_row["stu_cgpa"]?></td>
    </tr>

</table>
</body>
</html>
