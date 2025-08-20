SELECT r.contest_id,
       ROUND(COUNT(DISTINCT r.user_id) * 100.0 / (SELECT COUNT(*) FROM Users), 2) AS percentage
FROM Register r
GROUP BY contest_id
order by percentage desc, contest_id;
