# Write your MySQL query statement below
select pr.product_name as product_name, s.year as year, s.price as price
from Sales s
left join Product pr
on s.product_id=pr.product_id;