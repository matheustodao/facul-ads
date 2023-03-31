const brandSchema = {
  900: '#241E39',
  800: '#2D205A',
  700: '#493B7D',
  600: '#4B3790',
  500: '#6649CA',
  400: '#7257D1',
  300: '#987AFF',
  200: '#C4B2FF',
  100: '#E4DFF6'
}

tailwind.config = {
  theme: {
    extend: {
      colors: {
        'card-bg': '#251A4A',
        'dark-background-default': '#241E39',
        brand: brandSchema,
      }
    }
  }
}