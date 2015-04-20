namespace tdogl {

    class Camera {
    public:
        Camera();

        /* The position of the camera. */
        const glm::vec3& position() const;
        void setPosition(const glm::vec3& position);
        void offsetPosition(const glm::vec3& offset);

        /* Field of view */
        float fieldOfView() const;
        void setFieldOfView(float fieldOfView);

        /* The closest visible distance from the camera */
        float nearPlane() const;

        /* The farthest visible distance from the camera */
        float farPlane() const;

        /* Sets the near and far plane distances */
        void setNearAndFarPlanes(float nearPlane, float farPlane);

        /* A rotation matrix that determines the direction the camera is looking */
        glm::mat4 orientation() const;

        /* Offsets the cameras orientation. */
        void offsetOrientation(float upAngle, float rightAngle);

        /** Orients the camera so that is it directly facing `position` */
        void lookAt(glm::vec3 position);

        /** The width divided by the height of the screen/window/viewport */
        float viewportAspectRatio() const;
        void setViewportAspectRatio(float viewportAspectRatio);

        /** A unit vector representing the direction the camera is facing */
        glm::vec3 forward() const;

        /** A unit vector representing the direction to the right of the camera*/
        glm::vec3 right() const;

        /** A unit vector representing the direction out of the top of the camera*/
        glm::vec3 up() const;

        /** The combined camera transformation matrix, including perspective projection. This is the complete matrix to use in the vertex shader. */
        glm::mat4 matrix() const;

        /** The perspective projection transformation matrix */
        glm::mat4 projection() const;

        /** The translation and rotation matrix of the camera. Same as the `matrix` method, except the return value does not include the projection transformation. */
        glm::mat4 view() const;

    private:
        glm::vec3 _position;
        float _horizontalAngle;
        float _verticalAngle;
        float _fieldOfView;
        float _nearPlane;
        float _farPlane;
        float _viewportAspectRatio;

        void normalizeAngles();
    };

}

