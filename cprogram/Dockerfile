# Set the base image to use
FROM gcc:latest
# Copy the C program into the container
COPY footballScoreCalculator.c .
# Compile the C program
RUN gcc -o footballScoreCalculator footballScoreCalculator.c
# Set the command to run when the container starts
CMD ["./footballScoreCalculator"]