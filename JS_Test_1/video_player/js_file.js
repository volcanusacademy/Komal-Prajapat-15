document.addEventListener("DOMContentLoaded", function () {
    const videoLinkInput = document.getElementById('videoLink');
    const addVideoForm = document.getElementById('addVideoForm');
    const videoList = document.getElementById('videoList');
    const youtubePlayer = document.querySelector('iframe.embed-responsive-item');

    addVideoForm.addEventListener('submit', function (e) {
        e.preventDefault();

        const videoLink = videoLinkInput.value.trim();
        if (videoLink) {
            const videoId = getVideoId(videoLink);
            if (videoId) {
                const listItem = document.createElement('li');
                listItem.innerHTML = `<a href="#" data-video-id="${videoId}">${videoLink}</a>`;
                videoList.appendChild(listItem);

                // Clear the input field
                videoLinkInput.value = '';
            } else {
                alert('Invalid YouTube video link');
            }
        }
    });

    videoList.addEventListener('click', function (e) {
        if (e.target.tagName === 'A') {
            e.preventDefault();
            const videoId = e.target.getAttribute('data-video-id');
            if (videoId) {
                playVideo(videoId);
            }
        }
    });

    function getVideoId(url) {
        const regExp = /(?:https:\/\/|http:\/\/|www\.)?(?:youtube\.com|youtu\.be)\/(?:embed\/|v\/|watch\?v=)?([^#\&\?]*).*/;
        const match = url.match(regExp);
        return match && match[1];
    }

    function playVideo(videoId) {
        const embedUrl = `https://www.youtube.com/embed/${videoId}`;
        youtubePlayer.src = embedUrl;
    }
});
